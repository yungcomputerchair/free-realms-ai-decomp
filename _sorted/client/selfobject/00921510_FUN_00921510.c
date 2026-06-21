// addr: 0x00921510
// name: FUN_00921510
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00921510(undefined4 param_1)

{
  uint uVar1;
  void *this;
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a temporary 0xe4-byte profile/client record, deserializes it with
                       00911d60, passes it to a processing helper, and frees it. Class identity is
                       not evident. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158e66b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  this = Mem_Alloc(0xe4);
  _Memory = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    _Memory = ProfileItemState_ctor(this);
  }
  local_4 = 0xffffffff;
  FUN_00911d60(param_1);
  FUN_00ae1d50(uVar1);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

