// addr: 0x013c5ca0
// name: RuleSetData_deserialize
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RuleSetData_deserialize(void * this, void * stream) */

bool __thiscall RuleSetData_deserialize(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes RuleSetData by reading the rule-set id and an expression-tree
                       persistent pointer, wrapped by begin/end virtual stream callbacks. */
  this_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    if (bVar2) {
      bVar2 = PersistentComponent_deserializePointer(this_00,(void *)((int)this + 8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

