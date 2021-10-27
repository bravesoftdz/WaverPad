procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.soundboardToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.listBox1 := new System.Windows.Forms.ListBox();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.maskedTextBox1 := new System.Windows.Forms.MaskedTextBox();
        self.label2 := new System.Windows.Forms.Label();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.playSelectedSoundToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.addAFileToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.removeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.menuStrip1.SuspendLayout();
        self.groupBox1.SuspendLayout();
        self.groupBox2.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('menuStrip1.BackgroundImage')));
        self.menuStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.soundboardToolStripMenuItem, self.aboutToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(384, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // soundboardToolStripMenuItem
        // 
        self.soundboardToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.playSelectedSoundToolStripMenuItem, self.toolStripSeparator1, self.addAFileToolStripMenuItem, self.removeToolStripMenuItem));
        self.soundboardToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.soundboardToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('soundboardToolStripMenuItem.Image')));
        self.soundboardToolStripMenuItem.Name := 'soundboardToolStripMenuItem';
        self.soundboardToolStripMenuItem.Size := new System.Drawing.Size(100, 20);
        self.soundboardToolStripMenuItem.Text := 'Soundboard';
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('aboutToolStripMenuItem.Image')));
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(68, 20);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // listBox1
        // 
        self.listBox1.FormattingEnabled := true;
        self.listBox1.Location := new System.Drawing.Point(12, 36);
        self.listBox1.Name := 'listBox1';
        self.listBox1.Size := new System.Drawing.Size(160, 225);
        self.listBox1.TabIndex := 1;
        self.listBox1.SelectedIndexChanged += listBox1_SelectedIndexChanged;
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.button2);
        self.groupBox1.Controls.Add(self.button1);
        self.groupBox1.Location := new System.Drawing.Point(178, 36);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(200, 48);
        self.groupBox1.TabIndex := 2;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Files';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(6, 19);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(91, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Add a file';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Enabled := false;
        self.button2.Location := new System.Drawing.Point(103, 19);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(91, 23);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Remove';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Enabled := false;
        self.button3.Location := new System.Drawing.Point(178, 231);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(200, 30);
        self.button3.TabIndex := 3;
        self.button3.Text := 'Play selected sound';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(6, 22);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(77, 13);
        self.label1.TabIndex := 4;
        self.label1.Text := 'Play sound for:';
        // 
        // maskedTextBox1
        // 
        self.maskedTextBox1.Location := new System.Drawing.Point(85, 19);
        self.maskedTextBox1.Mask := '#';
        self.maskedTextBox1.Name := 'maskedTextBox1';
        self.maskedTextBox1.Size := new System.Drawing.Size(12, 20);
        self.maskedTextBox1.TabIndex := 5;
        self.maskedTextBox1.Text := '3';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(99, 22);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(47, 13);
        self.label2.TabIndex := 6;
        self.label2.Text := 'seconds';
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.DefaultExt := 'wav';
        self.openFileDialog1.FileName := 'Sound';
        self.openFileDialog1.Filter := 'All files|*.*|Wave file|*.wav|MP3 file|*.mp3';
        self.openFileDialog1.Title := 'Select an audio file';
        self.openFileDialog1.FileOk += openFileDialog1_FileOk;
        // 
        // playSelectedSoundToolStripMenuItem
        // 
        self.playSelectedSoundToolStripMenuItem.Enabled := false;
        self.playSelectedSoundToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('playSelectedSoundToolStripMenuItem.Image')));
        self.playSelectedSoundToolStripMenuItem.Name := 'playSelectedSoundToolStripMenuItem';
        self.playSelectedSoundToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.H)));
        self.playSelectedSoundToolStripMenuItem.Size := new System.Drawing.Size(221, 22);
        self.playSelectedSoundToolStripMenuItem.Text := 'Play selected sound';
        self.playSelectedSoundToolStripMenuItem.Click += playSelectedSoundToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(218, 6);
        // 
        // addAFileToolStripMenuItem
        // 
        self.addAFileToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('addAFileToolStripMenuItem.Image')));
        self.addAFileToolStripMenuItem.Name := 'addAFileToolStripMenuItem';
        self.addAFileToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.O)));
        self.addAFileToolStripMenuItem.Size := new System.Drawing.Size(221, 22);
        self.addAFileToolStripMenuItem.Text := 'Add a file';
        self.addAFileToolStripMenuItem.Click += addAFileToolStripMenuItem_Click;
        // 
        // removeToolStripMenuItem
        // 
        self.removeToolStripMenuItem.Enabled := false;
        self.removeToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('removeToolStripMenuItem.Image')));
        self.removeToolStripMenuItem.Name := 'removeToolStripMenuItem';
        self.removeToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.Delete;
        self.removeToolStripMenuItem.Size := new System.Drawing.Size(221, 22);
        self.removeToolStripMenuItem.Text := 'Remove';
        self.removeToolStripMenuItem.Click += removeToolStripMenuItem_Click;
        // 
        // groupBox2
        // 
        self.groupBox2.Controls.Add(self.label1);
        self.groupBox2.Controls.Add(self.label2);
        self.groupBox2.Controls.Add(self.maskedTextBox1);
        self.groupBox2.Location := new System.Drawing.Point(178, 90);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(200, 135);
        self.groupBox2.TabIndex := 3;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'Settings';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(384, 281);
        self.Controls.Add(self.groupBox2);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.groupBox1);
        self.Controls.Add(self.listBox1);
        self.Controls.Add(self.menuStrip1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'WaverPad';
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.groupBox1.ResumeLayout(false);
        self.groupBox2.ResumeLayout(false);
        self.groupBox2.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
