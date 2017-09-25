<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="D" />
        <signal name="clk" />
        <signal name="led" />
        <port polarity="Input" name="D" />
        <port polarity="Input" name="clk" />
        <port polarity="Output" name="led" />
        <blockdef name="fd_1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="320" y1="-256" y2="-256" x1="384" />
            <rect width="256" x="64" y="-320" height="256" />
            <line x2="80" y1="-112" y2="-128" x1="64" />
            <line x2="64" y1="-128" y2="-144" x1="80" />
        </blockdef>
        <block symbolname="fd_1" name="XLXI_1">
            <blockpin signalname="clk" name="C" />
            <blockpin signalname="D" name="D" />
            <blockpin signalname="led" name="Q" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1280" y="1504" name="XLXI_1" orien="R0" />
        <branch name="D">
            <wire x2="1280" y1="1248" y2="1248" x1="1248" />
        </branch>
        <iomarker fontsize="28" x="1248" y="1248" name="D" orien="R180" />
        <branch name="clk">
            <wire x2="1280" y1="1376" y2="1376" x1="1248" />
        </branch>
        <iomarker fontsize="28" x="1248" y="1376" name="clk" orien="R180" />
        <branch name="led">
            <wire x2="1696" y1="1248" y2="1248" x1="1664" />
        </branch>
        <iomarker fontsize="28" x="1696" y="1248" name="led" orien="R0" />
    </sheet>
</drawing>