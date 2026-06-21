// addr: 0x014f5080
// name: NetworkCommand_deserializeStringIntsAndValuePairs
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeStringIntsAndValuePairs(void * this, void *
   reader) */

bool __thiscall NetworkCommand_deserializeStringIntsAndValuePairs(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes a string plus integer fields and, for newer versions, additional
                       value-pair structures. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readString(reader,(void *)((int)this + 4));
    if (bVar2) {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x20));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0x24));
        if (bVar2) {
          if (unaff_EDI < 3) {
LAB_014f5113:
            uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
            return (bool)uVar3;
          }
          local_4 = reader;
          cVar1 = FUN_014f4e20((int)this + 0x28);
          if (cVar1 != '\0') {
            local_4 = reader;
            cVar1 = Game_deserializeStringRecordList((int)this + 0x34);
            if (cVar1 != '\0') {
              cVar1 = Game_deserializeStringRecordList((int)this + 0x40);
              if (cVar1 != '\0') goto LAB_014f5113;
            }
          }
        }
      }
    }
  }
  return false;
}

