// addr: 0x00fdd8c0
// name: FUN_00fdd8c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void clear_dual_owned_buffers(void * obj) */

void __fastcall clear_dual_owned_buffers(void *obj)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Releases two optional owned buffers when their ownership flags are set, then
                       resets both descriptors to empty owned state. Owner class is not evident. */
  puStack_8 = &LAB_0162fd56;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)((int)obj + 0x30) != 0) {
    if (*(char *)((int)obj + 0x34) != '\0') {
      FUN_01160c00(*(int *)((int)obj + 0x30),uVar1);
    }
    *(undefined4 *)((int)obj + 0x30) = 0;
  }
  *(undefined1 *)((int)obj + 0x34) = 1;
  *(undefined4 *)((int)obj + 0x30) = 0;
  *(undefined4 *)((int)obj + 0x28) = 0;
  *(undefined4 *)((int)obj + 0x2c) = 0;
  local_4 = 0xffffffff;
  if (*(int *)((int)obj + 0x14) != 0) {
    if (*(char *)((int)obj + 0x18) != '\0') {
      FUN_01160c00(*(int *)((int)obj + 0x14),uVar1);
    }
    *(undefined4 *)((int)obj + 0x14) = 0;
  }
  *(undefined1 *)((int)obj + 0x18) = 1;
  *(undefined4 *)((int)obj + 0x14) = 0;
  *(undefined4 *)((int)obj + 0xc) = 0;
  *(undefined4 *)((int)obj + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

