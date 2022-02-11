import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "Electrician"

    StackView{
        id: myStack
        anchors.fill: parent
        initialItem: "startPage.qml"
    }
}
