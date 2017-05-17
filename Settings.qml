import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1


TabView {
    id: tabView
    anchors.fill: parent
    Tab {
        title: "Serial"
        SerialSettings{}
    }
    Tab {
        title: "Gui"
        GuiSettings{}
    }
}
