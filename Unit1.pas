unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, System.ComponentModel, About;

{$reference 'PresentationCore.dll'}

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure playSelectedSoundToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure addAFileToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure removeToolStripMenuItem_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    soundboardToolStripMenuItem: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    listBox1: ListBox;
    groupBox1: GroupBox;
    button2: Button;
    button1: Button;
    button3: Button;
    components: System.ComponentModel.IContainer;
    openFileDialog1: OpenFileDialog;
    playSelectedSoundToolStripMenuItem: ToolStripMenuItem;
    toolStripSeparator1: ToolStripSeparator;
    addAFileToolStripMenuItem: ToolStripMenuItem;
    removeToolStripMenuItem: ToolStripMenuItem;
    menuStrip1: MenuStrip;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new AboutForm).show;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  var SoundboardPlayer := new System.Windows.Media.MediaPlayer;
  var i: integer;
  SoundboardPlayer.Open(new System.Uri(listBox1.SelectedItem.ToString, System.UriKind.Relative));
  SoundboardPlayer.Play();
end;

procedure Form1.listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  if(listBox1.SelectedItem <> nil) then begin
    button3.Enabled := true;
    playSelectedSoundToolStripMenuItem.Enabled := true;
    button2.Enabled := true;
    removeToolStripMenuItem.Enabled := true;
  end;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  openFileDialog1.ShowDialog;
end;

procedure Form1.openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  if(listBox1.Items.Contains(openFileDialog1.FileName) = false) then listBox1.Items.Add(openFileDialog1.FileName);
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  listBox1.Items.Remove(listBox1.SelectedItem);
  if(listBox1.SelectedItem = nil) then begin
    button3.Enabled := false;
    playSelectedSoundToolStripMenuItem.Enabled := false;
    button2.Enabled := false;
    removeToolStripMenuItem.Enabled := false;
  end;
end;

procedure Form1.playSelectedSoundToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  var SoundboardPlayer := new System.Windows.Media.MediaPlayer;
  var i: integer;
  SoundboardPlayer.Open(new System.Uri(listBox1.SelectedItem.ToString, System.UriKind.Relative));
  SoundboardPlayer.Play();
end;

procedure Form1.addAFileToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  openFileDialog1.ShowDialog;
end;

procedure Form1.removeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  listBox1.Items.Remove(listBox1.SelectedItem);
  if(listBox1.SelectedItem = nil) then begin
    button3.Enabled := false;
    playSelectedSoundToolStripMenuItem.Enabled := false;
    button2.Enabled := false;
    removeToolStripMenuItem.Enabled := false;
  end;
end;

end.
