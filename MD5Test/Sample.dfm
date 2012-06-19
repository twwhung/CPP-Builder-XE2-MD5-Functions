object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'MD5 Test'
  ClientHeight = 169
  ClientWidth = 205
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 24
    Top = 32
    Width = 145
    Height = 25
    Caption = 'StringToMD5String'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 72
    Width = 145
    Height = 25
    Caption = 'FileToMD5String'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 24
    Top = 112
    Width = 145
    Height = 25
    Caption = 'TStreamToMD5String'
    TabOrder = 2
    OnClick = Button3Click
  end
end
