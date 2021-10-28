unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutForm = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutForm.resources}
    linkLabel1: LinkLabel;
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    pictureBox1: PictureBox;
    {$include About.AboutForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AboutForm.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://github.com/MichaelAgarkov');
end;

end.
