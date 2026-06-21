// addr: 0x0082f2b0
// name: UiEditor_updateSelectedControlPropertyList
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UiEditor_updateSelectedControlPropertyList(void * this) */

void __fastcall UiEditor_updateSelectedControlPropertyList(void *this)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  void **outObject;
  void *local_20;
  undefined **local_1c;
  undefined *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Updates the UI editor property table for selected controls, including
                       none/multiple-selection placeholders. Evidence strings name
                       UiEditor.wndProperties.tblProperties, App.UI.SelectedControl.PropertyList,
                       None., and {Multiple Controls Selected.}. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156bf98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outObject = &local_20;
  iVar8 = 0;
  local_20 = (void *)0x0;
  iVar4 = FUN_00705bc0("UiEditor.wndProperties.btnNameTest",outObject,
                       DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  bVar2 = FUN_00819650(DAT_01be1090,iVar4,outObject);
  if (bVar2) {
    iVar8 = FUN_00d8d382(local_20,0,&GObject::RTTI_Type_Descriptor,&GCtrl::RTTI_Type_Descriptor,0);
  }
  piVar7 = (int *)0x0;
  if (iVar8 != 0) {
    piVar7 = (int *)FUN_00d8d382(iVar8,0,&GCtrl::RTTI_Type_Descriptor,
                                 &GuiPropertySet::RTTI_Type_Descriptor,0);
  }
  iVar4 = *(int *)((int)this + 0x3f8);
  if (iVar4 == 1) {
    if (*(undefined4 **)((int)this + 0x3f0) == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined4 **)((int)this + 0x3f0);
    }
    local_1c = SoeUtil::IString<char>::vftable;
    local_18 = &DAT_01be1210;
    local_10 = (void *)0x0;
    local_14 = 0;
    local_4 = 0;
    cVar3 = FUN_0081d0c0(uVar9,&local_1c);
    if (cVar3 != '\0') {
      pvVar5 = (void *)FUN_00d8d382(uVar9,0,&GCtrl::RTTI_Type_Descriptor,
                                    &GuiPropertySet::RTTI_Type_Descriptor,0);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x14))(8,local_18);
      }
      local_20 = (void *)0x0;
      cVar3 = FUN_008195a0("App.UI.SelectedControl.PropertyList",&local_20);
      if ((cVar3 != '\0') &&
         (pvVar6 = (void *)FUN_00d8d382(local_20,0,&GuiDataSource::RTTI_Type_Descriptor,
                                        &GuiPropertyDataSource::RTTI_Type_Descriptor,0),
         pvVar6 != (void *)0x0)) {
        GuiPropertyDataSource_removeSharedPropertyAndNotify(pvVar6,pvVar5);
        piVar7 = GuiObjectRegistry_findGuiTableCtrl("UiEditor.wndProperties.tblProperties");
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x27c))(1,0,0,1,0,0,0);
        }
      }
    }
    local_4 = 0xffffffff;
    local_1c = SoeUtil::IString<char>::vftable;
    if ((int)local_10 < 1) {
      ExceptionList = local_c;
      return;
    }
    piVar7 = (int *)(local_18 + -4);
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 != 1 && -1 < iVar4 + -1) {
      ExceptionList = local_c;
      return;
    }
    (*(code *)SoeUtil::IString<char>::vftable[2])(piVar7);
    ExceptionList = local_10;
    return;
  }
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      ExceptionList = local_c;
      return;
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x14))(8,"None.");
    }
    local_20 = (void *)0x0;
    cVar3 = FUN_008195a0("App.UI.SelectedControl.PropertyList",&local_20);
    if (cVar3 == '\0') {
      ExceptionList = local_c;
      return;
    }
    pvVar5 = (void *)FUN_0082ecf0(local_20,0);
    if (pvVar5 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    GuiPropertyDataSource_removeSharedPropertyAndNotify(pvVar5,(void *)0x0);
  }
  else {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x14))(8,"{Multiple Controls Selected.}");
    }
    local_20 = (void *)0x0;
    cVar3 = FUN_008195a0("App.UI.SelectedControl.PropertyList",&local_20);
    if (cVar3 == '\0') {
      ExceptionList = local_c;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 0x3f0);
    pvVar5 = (void *)FUN_00d8d382(local_20,0,&GuiDataSource::RTTI_Type_Descriptor,
                                  &GuiPropertyDataSource::RTTI_Type_Descriptor,0);
    if (pvVar5 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    GuiPropertyDataSource_removeSharedPropertyAndNotify(pvVar5,(void *)0x0);
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[1]) {
      pvVar6 = (void *)FUN_00d8d382(*puVar1,0,&GCtrl::RTTI_Type_Descriptor,
                                    &GuiPropertySet::RTTI_Type_Descriptor,0);
      GuiPropertyDataSource_addPropertySetAndNotify(pvVar5,pvVar6);
    }
  }
  piVar7 = GuiObjectRegistry_findGuiTableCtrl("UiEditor.wndProperties.tblProperties");
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x27c))(1,0,0,1,0,0,0);
  }
  ExceptionList = local_c;
  return;
}

