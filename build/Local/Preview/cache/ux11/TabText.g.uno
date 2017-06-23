[Uno.Compiler.UxGenerated]
public partial class TabText: Fuse.Controls.Panel
{
    string _field_TextColor;
    [global::Uno.UX.UXOriginSetter("SetTextColor")]
    public string TextColor
    {
        get { return _field_TextColor; }
        set { SetTextColor(value, null); }
    }
    public void SetTextColor(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextColor)
        {
            _field_TextColor = value;
            OnPropertyChanged("TextColor", origin);
        }
    }
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<string> this_TextColor_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static TabText()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TabText()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.This();
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, gadden_accessor_TabText_Text.Singleton);
        this_TextColor_inst = new gadden_TabText_TextColor_Property(this, __selector1);
        this_Text_inst = new gadden_TabText_Text_Property(this, __selector2);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.This();
        temp_TextColor_inst = new gadden_FuseControlsTextControl_TextColor_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, gadden_accessor_Fuse_Controls_Panel_Color.Singleton);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        this.Margin = float4(0f, 0f, 0f, 4f);
        this.ClipToBounds = false;
        temp.FontSize = 12f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Font = global::MainView.RalewayBlack;
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_TextColor_inst);
        __g_nametable.Properties.Add(this_Text_inst);
        this.Background = temp7;
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "Text";
}