// addr: 0x00ad3a60
// name: TcgMainWindow_destroyTradingCardCtrl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TcgMainWindow_destroyTradingCardCtrl(void) */

void TcgMainWindow_destroyTradingCardCtrl(void)

{
  bool bVar1;
  int id_;
  int *piVar2;
  void **outObject;
  void *local_4;
  
                    /* Finds TcgMainWindow as a GuiTradingCardCtrl, calls its cleanup vfunc, runs
                       additional teardown, and releases/deletes it. The string names the target
                       control. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  id_ = FUN_00705bc0(PTR_s_TcgMainWindow_01b55514);
  bVar1 = FUN_00819650(DAT_01be1090,id_,outObject);
  if ((bVar1) &&
     (piVar2 = (int *)FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                                   &GuiTradingCardCtrl::RTTI_Type_Descriptor,0),
     piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xc))();
    FUN_00818300(piVar2);
    (**(code **)(*piVar2 + 0x10))(0);
  }
  return;
}

