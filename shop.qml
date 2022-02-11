import QtQuick 2.12
import QtQuick.Controls 2.12

Item {

    anchors.fill: parent
    id: shop
    Label{
        id: name
        color: "green"
        font.pixelSize: 15
        text: "Name : " + backend.get_electrician_name();
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.margins: 5
    }
    Label{
        id: age
        color: "green"
        font.pixelSize: 15
        text: "Age : " + backend.get_electrician_age();
        anchors.top: name.bottom
        anchors.left: parent.left
        anchors.margins: 5
    }
    Label{
        id: level
        color: "green"
        font.pixelSize: 15
        text: "Level : " + backend.get_electrician_level();
        anchors.top: age.bottom
        anchors.left: parent.left
        anchors.margins: 5
    }


    Row {

        anchors.centerIn: parent
        spacing: 20
        Column {
            Image {
                id: lamp_img
                source: "assets/lamp.png"
                width: 200
                height: 250
                visible: true
            }
            Button {
                font.pixelSize: 15
                text: "Buy lamp"
                width: 200
                onClicked: {
                    buy_lamp.open();
                }
            }
        }
        Column {
            Image {
                id: wire_img
                source: "assets/wire.png"
                width: 200
                height: 250
                visible: true
            }
            Button {
                font.pixelSize: 15
                text: "Buy wire"
                width: 200
                onClicked: {
                    buy_wire.open()
                }
            }
        }
    }
    Button {
        text: "End Shopping"
        font.pixelSize: 15
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        width: 200
        onClicked: {
            backend.end_shopping();

        }
    }
    Button {
        text: "Back"
        font.pixelSize: 15
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        width: 200
        onClicked: {
            myStack.pop();
        }
    }
    Dialog{
        id: buy_lamp
        parent: shop
        anchors.centerIn: parent
        width: parent.width / 1.5
        height: parent.height / 1.5
        modal: true
        font.pixelSize: 15
        Column{
            spacing: 10
            anchors.centerIn: parent
            Label{
                text: "lamp type:"
            }
            Row {
                spacing: 20
                RadioButton{
                    id: led
                    text: "Led"
                }
                RadioButton{
                    id: incandescent
                    text: "Incandescent"
                }
            }
            Label{
                text: "lamp color:"
            }
            Row {
                spacing: 20
                RadioButton{
                    id: yellow
                    text: "Yellow"
                }
                RadioButton{
                    id: white
                    text: "White"
                }
            }
            Label{
                text: "Price"
            }
            TextField{
                id: lamp_price;

                placeholderText: "00.00$"
            }
            Button{
                text: "Buy"
                onClicked: {
                    if(incandescent.checked && white.checked)
                    {
                        backend.add_lamp(1,1,lamp_price.text)
                    }
                    else if(incandescent.checked && yellow.checked)
                    {
                        backend.add_lamp(1,2,lamp_price.text)
                    }
                    else if(led.checked && white.checked)
                    {
                        backend.add_lamp(2,1,lamp_price.text)
                    }
                    else
                    {
                        backend.add_lamp(2,2,lamp_price.text)
                    }

                    buy_lamp.close();
                    lamp_price.text = ""
                    led.checked = true
                    yellow.checked = true
                }
            }
        }

    }
    Dialog{
        id: buy_wire
        parent: shop
        anchors.centerIn: parent
        width: parent.width / 1.5
        height: parent.height / 1.5
        modal: true
        font.pixelSize: 15
        Column{
            spacing: 10
            anchors.centerIn: parent
            Label{
                text: "wire length:"
            }
            TextField{
                id: wire_length
                placeholderText: "1m"
            }
            Label{
                text: "wire diameter:"
            }
            TextField{
                id: wire_diameter
                placeholderText: "1mm"
            }

            Label{
                text: "wire type:"
            }

            Row {
                spacing: 20
                RadioButton{
                    id: low_voltage
                    text: "Low voltage"
                }
                RadioButton{
                    id: high_voltage
                    text: "High voltage"
                }
            }


            Label{
            text: "Price"
            }
            TextField{
                id: wire_price
                placeholderText: "00.00$"
            }
            Button{
                text: "Buy"
                onClicked: {
                    if(low_voltage.checked)
                    {
                        backend.add_wire(wire_length.text, wire_diameter.text,1, wire_price.text);
                    }
                    else
                    {
                        backend.add_wire(wire_length.text, wire_diameter.text,1, wire_price.text);
                    }

                    buy_wire.close();
                    wire_diameter.text = ""
                    wire_length.text = ""
                    wire_price.text = ""
                    low_voltage.checked = true

                }
            }
        }

    }
}
