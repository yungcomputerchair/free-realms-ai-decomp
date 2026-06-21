// addr: 0x00823d10
// name: UiEditor_updateCreateButtonSelections
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UiEditor_updateCreateButtonSelections(void * this) */

void __fastcall UiEditor_updateCreateButtonSelections(void *this)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  void *local_4;
  
                    /* Updates all UiEditor.wndCreate tool buttons (Window, Edit, Label, CheckBox,
                       RadioButton, layout boxes, Flash, Image, Panel, Table, WebBrowser, etc.) to
                       reflect the selected control type stored at this+0x3ac. It finds each
                       GuiButtonCtrl and toggles property id 10. */
  ppvVar8 = &local_4;
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnWindow");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_Window_01b362f8;
    pcVar5 = PTR_s_Window_01b362f8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_Window_01b362f8,pcVar5 + (1 - (int)PTR_s_Window_01b362f8));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnEdit");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b36304;
    pcVar5 = PTR_DAT_01b36304;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b36304,pcVar5 + (1 - (int)PTR_DAT_01b36304));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnLabel");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b36310;
    pcVar5 = PTR_DAT_01b36310;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b36310,pcVar5 + (1 - (int)PTR_DAT_01b36310));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnCheckBox");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_CheckBox_01b3631c;
    pcVar5 = PTR_s_CheckBox_01b3631c;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_CheckBox_01b3631c,pcVar5 + (1 - (int)PTR_s_CheckBox_01b3631c));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnRadioButton");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_RadioButton_01b36328;
    pcVar5 = PTR_s_RadioButton_01b36328;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_RadioButton_01b36328,
                         pcVar5 + (1 - (int)PTR_s_RadioButton_01b36328));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnHBox");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b36334;
    pcVar5 = PTR_DAT_01b36334;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b36334,pcVar5 + (1 - (int)PTR_DAT_01b36334));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnVBox");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b36340;
    pcVar5 = PTR_DAT_01b36340;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b36340,pcVar5 + (1 - (int)PTR_DAT_01b36340));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnBox");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_FreeBox_01b3634c;
    pcVar5 = PTR_s_FreeBox_01b3634c;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_FreeBox_01b3634c,pcVar5 + (1 - (int)PTR_s_FreeBox_01b3634c));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnButton");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_Button_01b36358;
    pcVar5 = PTR_s_Button_01b36358;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_Button_01b36358,pcVar5 + (1 - (int)PTR_s_Button_01b36358));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnFlash");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_Flashanim_01b36364;
    pcVar5 = PTR_s_Flashanim_01b36364;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_Flashanim_01b36364,pcVar5 + (1 - (int)PTR_s_Flashanim_01b36364)
                        );
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnImage");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_Image_01b36388;
    pcVar5 = PTR_s_Image_01b36388;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_Image_01b36388,pcVar5 + (1 - (int)PTR_s_Image_01b36388));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnPanel");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b36394;
    pcVar5 = PTR_DAT_01b36394;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b36394,pcVar5 + (1 - (int)PTR_DAT_01b36394));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnTable");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_Table_01b363a0;
    pcVar5 = PTR_s_Table_01b363a0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_Table_01b363a0,pcVar5 + (1 - (int)PTR_s_Table_01b363a0));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnTab");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b363ac;
    pcVar5 = PTR_DAT_01b363ac;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b363ac,pcVar5 + (1 - (int)PTR_DAT_01b363ac));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnScrollPanel");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_ScrollPanel_01b363b8;
    pcVar5 = PTR_s_ScrollPanel_01b363b8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_ScrollPanel_01b363b8,
                         pcVar5 + (1 - (int)PTR_s_ScrollPanel_01b363b8));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnComboBox");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_ComboBox_01b363d0;
    pcVar5 = PTR_s_ComboBox_01b363d0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_ComboBox_01b363d0,pcVar5 + (1 - (int)PTR_s_ComboBox_01b363d0));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnTree");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_DAT_01b3637c;
    pcVar5 = PTR_DAT_01b3637c;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_DAT_01b3637c,pcVar5 + (1 - (int)PTR_DAT_01b3637c));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  uVar2 = *(undefined4 *)((int)this + 0x3ac);
  ppvVar8 = &local_4;
  local_4 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndCreate.btnWebBrowser");
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,ppvVar8);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                           &GuiButtonCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    cVar1 = *PTR_s_WebBrowser_01b36370;
    pcVar5 = PTR_s_WebBrowser_01b36370;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar6 = FUN_00401940(uVar2,PTR_s_WebBrowser_01b36370,
                         pcVar5 + (1 - (int)PTR_s_WebBrowser_01b36370));
    puVar7 = &DAT_0176cfcc;
    if (iVar6 != 0) {
      puVar7 = &DAT_0176cfd0;
    }
    (**(code **)(*(int *)(iVar4 + 0x148) + 0x14))(10,puVar7);
  }
  return;
}

