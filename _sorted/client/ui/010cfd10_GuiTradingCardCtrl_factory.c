// addr: 0x010cfd10
// name: GuiTradingCardCtrl_factory
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiTradingCardCtrl_factory(int op_, void * storage, void * arg) */

void * __cdecl GuiTradingCardCtrl_factory(int op_,void *storage,void *arg)

{
  int iVar1;
  void *pvVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/thunk for GuiTradingCardCtrl supporting placement construction,
                       alternate construction, allocation+construction, reset/helper op, and
                       deleting destructor depending on op. Class identity comes from constructor
                       calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164b0e8;
  local_c = ExceptionList;
  switch(op_) {
  case 0:
    local_4 = 0;
    if (storage != (void *)0x0) {
      ExceptionList = &local_c;
      GuiTradingCardCtrl_ctor(storage);
    }
    ExceptionList = local_c;
    return storage;
  case 1:
    local_4 = 1;
    if (storage != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_010cfb20(arg);
    }
    ExceptionList = local_c;
    return storage;
  case 2:
    ExceptionList = &local_c;
    pvVar2 = (void *)FUN_010cdfe0(400);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = GuiTradingCardCtrl_ctor(pvVar2);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    iVar1 = FUN_010cdfe0(400);
    local_4 = 3;
    if (iVar1 != 0) {
      pvVar2 = (void *)FUN_010cfb20(arg);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_010cf020();
    ExceptionList = local_c;
    return storage;
  case 5:
    if (storage != (void *)0x0) {
      ExceptionList = &local_c;
      (*(code *)**(undefined4 **)storage)(1,DAT_01b839d8 ^ (uint)&stack0xfffffff0);
      ExceptionList = unaff_ESI;
      return storage;
    }
  default:
    return storage;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

