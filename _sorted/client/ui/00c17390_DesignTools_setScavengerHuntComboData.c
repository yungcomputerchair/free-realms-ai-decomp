// addr: 0x00c17390
// name: DesignTools_setScavengerHuntComboData
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DesignTools_setScavengerHuntComboData(void * command) */

int __cdecl DesignTools_setScavengerHuntComboData(void *command)

{
  int iVar1;
  
                    /* For a one-argument command, extracts argument 1 and assigns it to the UI data
                       path DesignTools.wndScavengerHunt.comboHuntData. Always returns 0. */
  iVar1 = FUN_00e3a390(command);
  if (iVar1 == 1) {
    iVar1 = FUN_00e3a7b0(command,1);
    GuiComboBoxCtrl_setSelectedDataByName("DesignTools.wndScavengerHunt.comboHuntData",iVar1);
  }
  return 0;
}

