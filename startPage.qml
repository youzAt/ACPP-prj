import QtQuick 2.12
import QtQuick.Controls 2.12

Item {
    id: startpage
    anchors.fill: parent
    Image {
        anchors.fill: parent
        id: startpage_background
        source: "assets/bg.png"
        fillMode: Image.PreserveAspectFit
    }
    Column {
        id: buttons
        anchors.right: startpage.right
        anchors.rightMargin: 100
        y: 350
        spacing: 10

        Button {
            id: startbtn
            width: 200
            height: 70
            text: "Start"
            font.pixelSize: 20
            onClicked: {
                electricianlogin.open()
            }
        }
        Button {
            id: exitbtn
            width: 200
            height: 70
            text: "Exit"
            font.pixelSize: 20
            onClicked: {
                Qt.quit()
            }
        }
        Dialog {
            id: electricianlogin
            parent: startpage
            anchors.centerIn: parent
            modal: true
            width: startpage.width / 1.5
            height: startpage.height / 1.5
            title: "Electrician Info"
            font.pixelSize: 15
            Column {
                anchors.centerIn: parent
                spacing: 10
                Label {
                    text: "Electrician Name"
                }
                TextField {
                    placeholderText: "Name"
                    maximumLength: 15
                    id: electricianName
                }
                Label {
                    text: "Electrician Age"
                }
                TextField {
                    placeholderText: "Age"
                    maximumLength: 2
                    id: electricianAge
                }
                Label {
                    text: "Electrician level"
                }
                Row {
                    RadioButton {
                        id: beginner_level
                        text: "Beginner"
                        checked: true
                    }
                    RadioButton {
                        id: intermediate_level
                        text: "Intermediate"
                    }
                    RadioButton {
                        id: professional_level
                        text: "Professoianl"
                    }
                }
                Button {
                    text: "Login"
                    onClicked: {
                        if (beginner_level.checked) {
                            if (!backend.electrician_login(
                                        electricianName.text,
                                        electricianAge.text, 1))
                                loginerror.text = "Electrician age must be in range of 18-80!!!"
                            else{
                                electricianlogin.close();
                                myStack.push("shop.qml")
                            }

                        } else if (intermediate_level.checked) {
                            if (!backend.electrician_login(
                                        electricianName.text,
                                        electricianAge.text, 2))
                                loginerror.text = "Electrician age must be in range of 18-80!!!"
                            else{
                                electricianlogin.close();
                                myStack.push("shop.qml")
                            }
                        } else {
                            if (!backend.electrician_login(
                                        electricianName.text,
                                        electricianAge.text, 3))
                                loginerror.text = "Electrician age must be in range of 18-80!!!"
                            else{
                                electricianlogin.close();
                                myStack.push("shop.qml")
                            }
                        }
                    }
                }
                Label {
                    id: loginerror
                    text: ""
                    color: "red"
                }

            }
        }
    }
}
