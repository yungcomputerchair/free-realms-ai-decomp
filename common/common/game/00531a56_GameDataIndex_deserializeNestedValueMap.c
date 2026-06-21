// addr: 0x00531a56
// name: GameDataIndex_deserializeNestedValueMap
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: bool GameDataIndex_deserializeNestedValueMap(void * this, uint
   expectedVersion) */

bool __thiscall GameDataIndex_deserializeNestedValueMap(void *this,uint expectedVersion)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int *local_2c;
  char local_28 [4];
  int local_24 [3];
  void *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = this;
                    /* Checks a version/id from the reader at this+0x30, then reads groups and
                       nested entries into allocated 0x20-byte records and maps. Method behavior is
                       clear but the owning class is not evident. */
  FUN_00531733();
  uVar3 = (**(code **)(*(int *)((int)this + 0x30U) + 0x54))(expectedVersion,0);
  if (uVar3 == expectedVersion) {
    uVar3 = -(uint)(this != (void *)0xffffffe4) & (int)this + 0x30U;
    cVar2 = FUN_004c84c8(uVar3,&local_10);
    if (cVar2 == '\0') {
LAB_00531ba8:
      bVar1 = false;
    }
    else {
      local_8 = 0;
      if (local_10 != 0) {
        do {
          FUN_004c84c8(uVar3,local_24 + 2);
          cVar2 = FUN_004c84c8(uVar3,&local_c);
          if (cVar2 == '\0') goto LAB_00531ba8;
          pvVar4 = Mem_Alloc(0x20);
          if (pvVar4 == (void *)0x0) {
            puVar5 = (uint *)0x0;
          }
          else {
            puVar5 = (uint *)FUN_00526235();
          }
          if (puVar5 == (uint *)0x0) goto LAB_00531ba8;
          expectedVersion = 0;
          if (local_c != 0) {
            do {
              FUN_004c8667(uVar3,&local_2c);
              cVar2 = FUN_004c86a7(uVar3,local_24,local_28);
              if (cVar2 == '\0') goto LAB_00531ba8;
              if ((local_28[0] == '\0') && (local_24[0] == 0x13)) {
                FUN_004c84c8(uVar3,local_24 + 1);
              }
              else {
                local_24[1] = 0;
              }
              local_14 = local_2c;
              local_14 = IntDefaultMap_getOrInsert(puVar5 + 1,(int *)&local_14);
              iVar6 = FUN_004ce330();
              *local_14 = iVar6;
              FUN_0051ffc3(&local_2c);
              expectedVersion = expectedVersion + 1;
            } while (expectedVersion < local_c);
          }
          *puVar5 = local_24[2];
          expectedVersion = local_24[2];
          piVar7 = (int *)FUN_0052001d(&expectedVersion);
          local_8 = local_8 + 1;
          *piVar7 = (int)puVar5;
        } while (local_8 < local_10);
      }
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

