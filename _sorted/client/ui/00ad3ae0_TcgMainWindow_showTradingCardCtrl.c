// addr: 0x00ad3ae0
// name: TcgMainWindow_showTradingCardCtrl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TcgMainWindow_showTradingCardCtrl(void) */

void TcgMainWindow_showTradingCardCtrl(void)

{
  bool bVar1;
  int iVar2;
  void **outObject;
  void *local_4;
  
                    /* Finds TcgMainWindow as a GuiTradingCardCtrl and invokes a helper with
                       argument 0 when it exists. Exact helper behavior is inferred as a show/open
                       action. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  iVar2 = FUN_00705bc0(PTR_s_TcgMainWindow_01b55514);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (bVar1) {
    iVar2 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                         &GuiTradingCardCtrl::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      FUN_0042280f(0);
    }
  }
  return;
}

