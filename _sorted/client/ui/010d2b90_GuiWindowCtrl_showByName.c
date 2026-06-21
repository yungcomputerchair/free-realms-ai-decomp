// addr: 0x010d2b90
// name: GuiWindowCtrl_showByName
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiWindowCtrl_showByName(char * windowName, int unused_, bool center_) */

void __cdecl GuiWindowCtrl_showByName(char *windowName,int unused_,bool center_)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  void **outObject;
  void *local_c;
  int local_8;
  int local_4;
  
                    /* Finds a GuiWindowCtrl by name, optionally centers it on screen, sets it
                       visible through its window property vfunc, and may trigger a UI focus/update
                       event. Returns if the window cannot be found. */
  outObject = &local_c;
  local_c = (void *)0x0;
  iVar4 = FUN_00705bc0(windowName);
  bVar3 = FUN_00819650(DAT_01be1090,iVar4,outObject);
  if ((bVar3) &&
     (iVar4 = FUN_00d8d382(local_c,0,&GObject::RTTI_Type_Descriptor,
                           &GuiWindowCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
    if (center_) {
      iVar1 = *(int *)(iVar4 + 0x74);
      iVar2 = *(int *)(iVar4 + 0x70);
      FUN_0041964d(&local_8);
      FUN_004072e2((local_8 >> 1) - (iVar2 >> 1),(local_4 >> 1) - (iVar1 >> 1),0,0,6);
    }
    (**(code **)(*(int *)(iVar4 + 0x24) + 0xa4))(1);
    if ((char)windowName != '\0') {
      FUN_004072e2(0,0,0,0,0x23);
    }
  }
  return;
}

