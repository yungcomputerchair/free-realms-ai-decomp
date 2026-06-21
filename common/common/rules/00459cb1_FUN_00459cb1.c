// addr: 0x00459cb1
// name: FUN_00459cb1
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_refSlot_setObject(void * slot, void * objectPtr) */

void __thiscall unknown_refSlot_setObject(void *this,void *slot,void *objectPtr)

{
  int *piVar1;
  
                    /* Stores tag value 2 and an object pointer into a small slot, incrementing a
                       reference count at objectPtr+0x24+8 when present. */
  *(undefined4 *)this = 2;
  *(void **)((int)this + 4) = slot;
  if ((slot != (void *)0x0) && (*(int *)((int)slot + 0x24) != 0)) {
    piVar1 = (int *)(*(int *)((int)slot + 0x24) + 8);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

