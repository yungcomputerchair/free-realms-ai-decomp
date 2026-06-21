// addr: 0x01008eb0
// name: FUN_01008eb0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01008eb0(void * this, void * source) */

void __thiscall FUN_01008eb0(void *this,void *source)

{
  undefined4 uVar1;
  
                    /* Transfers ownership of two pointer fields from a source object into this
                       object, releasing any existing objects first. Class identity is unknown. */
  uVar1 = *(undefined4 *)((int)source + 4);
  *(undefined4 *)((int)source + 4) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    FUN_0100e470(*(int *)((int)this + 0x5c));
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  uVar1 = *(undefined4 *)((int)source + 0xc);
  *(undefined4 *)((int)source + 0xc) = 0;
  if (*(int **)((int)this + 100) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 100) + 4))();
  }
  *(undefined4 *)((int)this + 100) = uVar1;
  return;
}

