// addr: 0x010d3010
// name: GuiComboBoxCtrl_setSelectedDataByName
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiComboBoxCtrl_setSelectedDataByName(char * comboName, int value_) */

void __cdecl GuiComboBoxCtrl_setSelectedDataByName(char *comboName,int value_)

{
  bool bVar1;
  int iVar2;
  void **outObject;
  void *local_4;
  
                    /* Finds a GuiComboBoxCtrl by name and applies the supplied value through
                       combo-box helper 00848e00. Used by DesignTools scavenger hunt combo data
                       setter. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  iVar2 = FUN_00705bc0(comboName);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (bVar1) {
    iVar2 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                         &GuiComboBoxCtrl::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      FUN_00848e00(value_);
    }
  }
  return;
}

