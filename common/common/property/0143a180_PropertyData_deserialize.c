// addr: 0x0143a180
// name: PropertyData_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyData_deserialize(void * this, void * archive) */

bool __thiscall PropertyData_deserialize(void *this,void *archive)

{
  void *archive_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int aiStack_c [2];
  int iStack_4;
  
                    /* Deserializes a versioned property record: calls virtual begin/end hooks,
                       reads a string member, numeric fields, boolean flags, and optional
                       version-dependent fields. */
  archive_00 = archive;
  cVar1 = (**(code **)(*(int *)this + 0x10))(archive,&archive);
  if ((((cVar1 != '\0') &&
       (uVar4 = PropertyArchive_deserializeStringMember(this,archive_00), (char)uVar4 != '\0')) &&
      (bVar2 = Deserializer_readInteger(archive_00,(int *)((int)this + 8)), bVar2)) &&
     ((cVar1 = FUN_012faf70(archive_00,(int)this + 0x10), cVar1 != '\0' &&
      (bVar2 = Deserializer_readInteger(archive_00,(int *)&stack0xffffffec), bVar2)))) {
    *(bool *)((int)this + 0x14) = unaff_EDI != 0;
    bVar2 = Deserializer_readInteger(archive_00,(int *)&stack0xfffffff0);
    if (bVar2) {
      *(undefined4 *)((int)this + 0x18) = unaff_ESI;
      bVar2 = Deserializer_readInteger(archive_00,aiStack_c);
      if (bVar2) {
        *(bool *)((int)this + 0x1c) = aiStack_c[0] != 0;
        if ((1 < iStack_4) &&
           (bVar2 = Deserializer_readInteger(archive_00,(int *)((int)this + 0xc)), !bVar2)) {
          return false;
        }
        if ((2 < iStack_4) &&
           (bVar2 = Deserializer_readInteger(archive_00,(int *)((int)this + 0x20)), !bVar2)) {
          return false;
        }
        uVar3 = (**(code **)(*(int *)this + 0x14))(archive_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

