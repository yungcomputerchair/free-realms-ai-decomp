// addr: 0x0143a520
// name: PropertyVector16_writePersistentRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector16_writePersistentRange(void * component, void * writer) */

void PropertyVector16_writePersistentRange(void *component,void *writer)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EDI;
  
                    /* Writes a persistent component id and one to three count/range values
                       depending on the writer mode reported by vtable offset 0x34. */
  if (component != (void *)0x0) {
    iVar1 = PersistentComponent_getPersistentId(component);
    iVar2 = PropertyVector16_getCount((int)component);
    iVar3 = FUN_013d3b30();
    PropertyVector16_getOffset(component);
    iVar4 = (**(code **)(*(int *)writer + 0x34))();
    if (iVar4 == 1) {
      (**(code **)(*(int *)writer + 0xc))(iVar1,iVar2);
    }
    else {
      if (iVar4 == 2) {
        (**(code **)(*(int *)writer + 0x10))(iVar1,0,iVar3);
        (**(code **)(*(int *)writer + 0x10))(iVar1,1,iVar2 - iVar3);
        return;
      }
      if (iVar4 == 3) {
        (**(code **)(*(int *)writer + 0x10))(iVar1,0,iVar3);
        (**(code **)(*(int *)writer + 0x10))(iVar1,1,iVar2 - iVar3);
        (**(code **)(*(int *)writer + 0x10))(iVar1,2,unaff_EDI);
        return;
      }
    }
  }
  return;
}

