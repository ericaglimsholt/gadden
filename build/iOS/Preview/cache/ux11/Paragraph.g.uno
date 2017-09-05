[Uno.Compiler.UxGenerated]
public partial class Paragraph: Fuse.Controls.TextView
{
    static Paragraph()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Paragraph()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 14f;
        this.TextColor = float4(1f, 1f, 1f, 1f);
        this.IsReadOnly = true;
        this.Font = global::MainView.Raleway;
    }
}
