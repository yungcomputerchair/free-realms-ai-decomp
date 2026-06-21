// addr: 0x00ad3b40
// name: TcgMainWindow_updateTradingCardCtrl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TcgMainWindow_updateTradingCardCtrl(void) */

void TcgMainWindow_updateTradingCardCtrl(void)

{
  bool bVar1;
  int iVar2;
  void **outObject;
  void *local_4;
  
                    /* Finds TcgMainWindow as a GuiTradingCardCtrl and invokes a no-argument helper
                       when it exists. Exact action is unknown but is specific to the trading card
                       main window. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  iVar2 = FUN_00705bc0(PTR_s_TcgMainWindow_01b55514);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (bVar1) {
    iVar2 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                         &GuiTradingCardCtrl::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      FUN_00422996();
    }
  }
  return;
}

