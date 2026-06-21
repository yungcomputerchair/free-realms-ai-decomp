// addr: 0x00b344f0
// name: FUN_00b344f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00b344f0(void * this, int arg_) */

void __thiscall FUN_00b344f0(void *this,int arg_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x1c8-byte object with FUN_00b30950 and appends it to a linked
                       list at offsets 0x2b0..0x2b8. Class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d605b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1c8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_00b30950(pvVar1,arg_);
  }
  *(undefined4 *)((int)pvVar1 + 0x1c0) = *(undefined4 *)((int)this + 0x2b4);
  if (*(int *)((int)this + 0x2b4) == 0) {
    *(void **)((int)this + 0x2b0) = pvVar1;
  }
  else {
    *(void **)(*(int *)((int)this + 0x2b4) + 0x1c4) = pvVar1;
  }
  *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + 1;
  *(void **)((int)this + 0x2b4) = pvVar1;
  ExceptionList = local_c;
  return;
}

