// addr: 0x01482fe0
// name: InstanceSubIDFlags_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint InstanceSubIDFlags_deserialize(int * this, void * reader) */

uint __thiscall InstanceSubIDFlags_deserialize(void *this,void *reader)

{
  void *stream;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint uVar2;
  
                    /* Deserializes InstanceSubIDFlags by opening the object record, reading the
                       embedded InstanceSubID value, then reading the flags integer at this+0x0c and
                       closing the record. */
  stream = reader;
  (**(code **)(*(int *)this + 0x10))(reader,&reader);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01483510(this,stream);
    bVar1 = Deserializer_readInteger(stream,(int *)((int)this + 0xc));
    uVar3 = extraout_var_00;
    if (bVar1) {
      uVar2 = (**(code **)(*(int *)this + 0x14))(stream);
      return uVar2;
    }
  }
  return (uint)uVar3 << 8;
}

