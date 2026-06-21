// addr: 0x00475815
// name: FUN_00475815
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint enumerate_texture_layers(int thisObj_, undefined4 unused_, undefined4
   query_) */

uint __thiscall
enumerate_texture_layers(void *this,int thisObj_,undefined4 unused_,undefined4 query_)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  int local_c;
  uint local_8;
  
                    /* Iterates five predefined layer/type descriptors, queries counts from a
                       resource interface, retrieves each item, builds descriptor records, and
                       forwards them to FUN_00474fb4. Class identity is not evident. */
  local_8 = 0;
  puVar4 = &DAT_01af69b4;
  local_c = 5;
  do {
    piVar1 = *(int **)(*(int *)((int)this + 0x10) + 0x24);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,unused_,*puVar4);
    local_8 = local_8 + iVar2;
    uVar3 = 0;
    if (local_8 != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x10) + 0x24);
        (**(code **)(*piVar1 + 0x1c))(piVar1,unused_,*puVar4,uVar3,&local_1c);
        local_2c = local_18;
        local_30 = local_1c;
        local_38 = puVar4[1];
        local_3c = puVar4[-1];
        FUN_00474fb4(local_40);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_8);
    }
    puVar4 = puVar4 + 3;
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_8;
}

