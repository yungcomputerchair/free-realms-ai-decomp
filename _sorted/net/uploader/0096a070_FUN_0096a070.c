// addr: 0x0096a070
// name: FUN_0096a070
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0096a070(void * this, void * list, int arg2_, int arg3_) */

void __thiscall FUN_0096a070(void *this,void *list,int arg2_,int arg3_)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a small 3-word list container at offset 0x80c, then
                       appends/constructs an item through FUN_00966c20. No class evidence is
                       present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01596c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x80c) == 0) {
    puVar1 = Mem_Alloc(0xc);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 **)((int)this + 0x80c) = puVar1;
  }
  local_4 = 0xffffffff;
  FUN_00966c20(*(void **)((int)this + 0x80c),list,arg2_);
  ExceptionList = local_c;
  return;
}

