// addr: 0x01408f70
// name: PropertyArchive_serializePackedRecord
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyArchive_serializePackedRecord(void * this, void * record) */

bool __thiscall PropertyArchive_serializePackedRecord(void *this,void *record)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Serializes a record inside an archive begin/end pair using FUN_013cef20 for
                       the record body. It only emits the end marker when both the begin call and
                       body serialization succeed. */
  pvVar1 = record;
  cVar2 = (**(code **)(*(int *)this + 0x10))(record,&record);
  if (cVar2 != '\0') {
    cVar2 = FUN_013cef20(pvVar1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*(int *)this + 0x14))(pvVar1);
      return (bool)uVar3;
    }
  }
  return false;
}

