// addr: 0x014e9950
// name: CommandObject_deserializeTemplateAndByteBuffer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplateAndByteBuffer(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeTemplateAndByteBuffer(void *this,void *reader)

{
  uint *outValue;
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  
                    /* Runs hooks, deserializes command template/base, reads a byte count, allocates
                       a buffer, and reads that many bytes. */
  this_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    cVar1 = FUN_01407cf0(this_00);
    if (cVar1 != '\0') {
      outValue = (uint *)((int)this + 8);
      bVar2 = Deserializer_readInteger(this_00,(int *)outValue);
      if (bVar2) {
        pvVar4 = Mem_Alloc(*outValue);
        *(undefined4 *)((int)this + 0xc) = pvVar4;
        cVar1 = FUN_013cfed0((undefined4 *)((int)this + 0xc),*outValue);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
          return (bool)uVar3;
        }
      }
      return false;
    }
  }
  return false;
}

