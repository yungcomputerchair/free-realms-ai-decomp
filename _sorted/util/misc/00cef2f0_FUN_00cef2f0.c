// addr: 0x00cef2f0
// name: FUN_00cef2f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00cef2f0(int *param_1)

{
  int *_Memory;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Removes and frees the head node of a doubly linked list, updates prev/next
                       endpoints and count, resets a Loggable vtable on the removed node before
                       freeing. No class evidence, so left unnamed. */
  puStack_8 = &LAB_0160f9de;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  _Memory = (int *)*param_1;
  if (_Memory != (int *)0x0) {
    ExceptionList = &local_c;
    if (*_Memory == 0) {
      *param_1 = _Memory[1];
    }
    else {
      *(int *)(*_Memory + 4) = _Memory[1];
    }
    if ((int *)_Memory[1] == (int *)0x0) {
      param_1[1] = *_Memory;
    }
    else {
      *(int *)_Memory[1] = *_Memory;
    }
    _Memory[1] = 0;
    *_Memory = 0;
    param_1[2] = param_1[2] + -1;
    local_4 = 0;
    FUN_0070a790(uVar1);
    local_4 = 0xffffffff;
    _Memory[10] = (int)Loggable::vftable;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

