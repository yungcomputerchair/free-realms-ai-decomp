// addr: 0x014b03c0
// name: SynchronizationCommand_SendInstances_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SynchronizationCommand_SendInstances_deserialize(void * this, void *
   stream) */

bool __thiscall SynchronizationCommand_SendInstances_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *vector;
  void *local_4;
  
                    /* Deserializes a SendInstances synchronization command by invoking base virtual
                       read hooks, reading the delivery ID, deserializing an instance/archetype
                       collection, and returning false on failure. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeWithNestedCommand(this,stream);
    if (bVar2) {
      local_4 = stream;
      bVar2 = StdVectorPairBool_deserialize(&local_4,vector);
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

