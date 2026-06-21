// addr: 0x012b87e0
// name: ArchetypeDB_deserializeCompressedArchetype
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * ArchetypeDB_deserializeCompressedArchetype
                (undefined4 param_1,void *param_2,int param_3,uint param_4)

{
  uint databaseID;
  bool bVar1;
  char cVar2;
  uint *outValue;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *extraout_EAX;
  undefined4 uVar6;
  int *this;
  char *pcVar7;
  undefined4 auStack_28 [2];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  databaseID = param_4;
                    /* Uncompresses an archetype payload, deserializes it through the persistent
                       component factory, casts to Archetype, sets its database id, and inserts it
                       into the DB. Evidence: RTTI references PersistentComponent and Archetype,
                       zlib error text, Archetype_setDatabaseID, and ArchetypeDB_insertArchetype. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d7f8;
  local_c = ExceptionList;
  outValue = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  ExceptionList = &local_c;
  if (param_4 == 0xffffffff) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x1b7);
  }
  param_4 = param_3 + 1;
  PacketBuffer_init(local_20);
  uStack_4 = 0;
  SerializationBuffer_resize(local_20,param_4);
  puVar3 = PacketBuffer_identity(param_2);
  puVar4 = PacketBuffer_identity(local_20);
  iVar5 = PacketBuffer_getSize(param_2);
  iVar5 = Zlib_inflateBuffer((void *)*puVar4,&param_4,(void *)*puVar3,iVar5);
  if (iVar5 != 0) {
    pcVar7 = "Couldn\'t uncompress an archetype: %d zres: %d";
    WAErrorLog_write("Couldn\'t uncompress an archetype: %d zres: %d");
    FUN_012f5a60("zres == 0","..\\common\\common\\property\\ArchetypeDB.cpp",0x1c4,pcVar7,param_1,
                 iVar5);
  }
  bVar1 = PacketBuffer_readPackedUInt(local_20,auStack_28,outValue);
  if (bVar1) {
    ComponentFactory_initSingleton();
    uVar6 = (**(code **)*extraout_EAX)(auStack_28[0]);
    this = (int *)FUN_00d8d382(uVar6,0,&PersistentComponent::RTTI_Type_Descriptor,
                               &Archetype::RTTI_Type_Descriptor,0);
    if (this != (int *)0x0) {
      Archetype_setDatabaseID(this,databaseID);
      cVar2 = (**(code **)(*this + 0x24))(local_20);
      if (cVar2 == '\0') {
        FUN_012f5a60("result","..\\common\\common\\property\\ArchetypeDB.cpp",0x1d4);
      }
      ArchetypeDB_insertArchetype(this,databaseID);
      uStack_4 = 0xffffffff;
      RawBuffer_free(local_20);
      ExceptionList = local_c;
      return this;
    }
  }
  uStack_4 = 0xffffffff;
  RawBuffer_free(local_20);
  ExceptionList = local_c;
  return (int *)0x0;
}

