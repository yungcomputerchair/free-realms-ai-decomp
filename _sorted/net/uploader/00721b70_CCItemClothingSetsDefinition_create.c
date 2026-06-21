// addr: 0x00721b70
// name: CCItemClothingSetsDefinition_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CCItemClothingSetsDefinition_create(void * owner) */

void * CCItemClothingSetsDefinition_create(void *owner)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and initializes a CCItemClothingSetsDefinition object with cleared
                       fields and the supplied owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0154ff0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = CCItemClothingSetsDefinition::vftable;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = owner;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  ExceptionList = local_c;
  return puVar1;
}

