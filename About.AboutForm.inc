procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(AboutForm));
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.richTextBox1 := new System.Windows.Forms.RichTextBox();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.tabControl1.SuspendLayout();
        self.tabPage1.SuspendLayout();
        self.SuspendLayout();
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(12, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(64, 64);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // linkLabel1
        // 
        self.linkLabel1.BackColor := System.Drawing.Color.Transparent;
        self.linkLabel1.Font := new System.Drawing.Font('Arial', 9, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.linkLabel1.ForeColor := System.Drawing.Color.White;
        self.linkLabel1.LinkArea := new System.Windows.Forms.LinkArea(28, 15);
        self.linkLabel1.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel1.Location := new System.Drawing.Point(82, 12);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(190, 64);
        self.linkLabel1.TabIndex := 1;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'WaverPad'#13#10'Version 1.1'#13#10#13#10'By Michael Agarkov';
        self.linkLabel1.UseCompatibleTextRendering := true;
        self.linkLabel1.LinkClicked += linkLabel1_LinkClicked;
        // 
        // tabControl1
        // 
        self.tabControl1.Controls.Add(self.tabPage1);
        self.tabControl1.Location := new System.Drawing.Point(12, 82);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(260, 197);
        self.tabControl1.TabIndex := 2;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.richTextBox1);
        self.tabPage1.Location := new System.Drawing.Point(4, 22);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(252, 171);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'License';
        self.tabPage1.UseVisualStyleBackColor := true;
        // 
        // richTextBox1
        // 
        self.richTextBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.richTextBox1.Location := new System.Drawing.Point(3, 3);
        self.richTextBox1.Name := 'richTextBox1';
        self.richTextBox1.ReadOnly := true;
        self.richTextBox1.Size := new System.Drawing.Size(246, 165);
        self.richTextBox1.TabIndex := 0;
        self.richTextBox1.Text := resources.GetString('richTextBox1.Text');
        // 
        // AboutForm
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(284, 291);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.linkLabel1);
        self.Controls.Add(self.pictureBox1);
        self.DoubleBuffered := true;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'AboutForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'About WaverPad';
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.tabControl1.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
