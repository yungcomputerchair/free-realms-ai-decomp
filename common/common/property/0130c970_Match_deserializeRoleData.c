// addr: 0x0130c970
// name: Match_deserializeRoleData
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Match_deserializeRoleData(void * this, void * serializer) */

bool __thiscall Match_deserializeRoleData(void *this,void *serializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  int unaff_EDI;
  int local_c [2];
  void *pvStack_4;
  
                    /* Deserializes Match role-related data after base deserialization: several
                       scalar fields, repeated role-set containers, string/integer fields, and
                       version-gated extra fields. Evidence is the caller Match_deserialize and
                       repeated LobbyRoleMap_getOrCreateRoleSet calls. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(serializer,local_c);
  if ((cVar1 != '\0') && (cVar1 = FUN_012faf70(serializer,(int)this + 0x2c), cVar1 != '\0')) {
    FUN_012faf70(serializer,(int)this + 0x30);
    cVar1 = FUN_012faf70(serializer,(int)this + 0x34);
    if ((cVar1 != '\0') &&
       ((cVar1 = FUN_012faf70(serializer,(int)this + 0x38), cVar1 != '\0' &&
        (cVar1 = FUN_012faf70(serializer,(int)this + 0x3c), cVar1 != '\0')))) {
      pvStack_4 = serializer;
      pvVar4 = (void *)LobbyRoleMap_getOrCreateRoleSet(&stack0xfffffff0);
      bVar2 = Deserializer_readIntegerVector(&pvStack_4,pvVar4);
      if (bVar2) {
        pvVar4 = (void *)LobbyRoleMap_getOrCreateRoleSet(&stack0xfffffff0);
        bVar2 = Deserializer_readIntegerVector(&pvStack_4,pvVar4);
        if (bVar2) {
          pvVar4 = (void *)LobbyRoleMap_getOrCreateRoleSet(&stack0xfffffff0);
          bVar2 = Deserializer_readIntegerVector(&pvStack_4,pvVar4);
          if (bVar2) {
            pvVar4 = (void *)LobbyRoleMap_getOrCreateRoleSet(&stack0xfffffff0);
            bVar2 = Deserializer_readIntegerVector(&pvStack_4,pvVar4);
            if (bVar2) {
              pvVar4 = (void *)LobbyRoleMap_getOrCreateRoleSet(&stack0xfffffff0);
              bVar2 = Deserializer_readIntegerVector(&pvStack_4,pvVar4);
              if ((((bVar2) &&
                   (bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x14)), bVar2))
                  && (bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x18)), bVar2)
                  ) && (bVar2 = Deserializer_readInteger(serializer,local_c), bVar2)) {
                *(int *)((int)this + 0x1c) = local_c[0];
                if ((1 < unaff_EDI) &&
                   (cVar1 = FUN_01302e20(serializer,(int)this + 0x54), cVar1 == '\0')) {
                  return false;
                }
                if ((unaff_EDI < 3) ||
                   ((bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x68)), bVar2
                    && (bVar2 = Deserializer_readInteger(serializer,(int *)((int)this + 0x6c)),
                       bVar2)))) {
                  uVar3 = (**(code **)(*(int *)this + 0x14))(serializer);
                  return (bool)uVar3;
                }
              }
            }
          }
        }
      }
      return false;
    }
  }
  return false;
}

