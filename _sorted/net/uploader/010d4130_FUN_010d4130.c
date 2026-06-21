// addr: 0x010d4130
// name: FUN_010d4130
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010d4130(void * owner, int key_, int value_) */

void __thiscall FUN_010d4130(void *this,void *owner,int key_,int value_)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x10-byte node, stores a key/value pair, appends it to a linked
                       list at owner+0x294/0x298, increments count, and marks dirty. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164b5cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  *puVar1 = owner;
  puVar1[1] = key_;
  puVar1[2] = *(undefined4 *)((int)this + 0x298);
  if (*(int *)((int)this + 0x298) == 0) {
    *(undefined4 **)((int)this + 0x294) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 0x298) + 0xc) = puVar1;
  }
  *(undefined4 **)((int)this + 0x298) = puVar1;
  *(int *)((int)this + 0x29c) = *(int *)((int)this + 0x29c) + 1;
  *(undefined1 *)((int)this + 0x2c4) = 1;
  ExceptionList = local_c;
  return;
}

