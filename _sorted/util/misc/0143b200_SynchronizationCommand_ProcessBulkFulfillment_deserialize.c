// addr: 0x0143b200
// name: SynchronizationCommand_ProcessBulkFulfillment_deserialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SynchronizationCommand_ProcessBulkFulfillment_deserialize(void * this,
   void * stream) */

bool __thiscall SynchronizationCommand_ProcessBulkFulfillment_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes the ProcessBulkFulfillment synchronization command by running
                       base/nested command reads, deserializing its member list, then finalizing the
                       command read. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeWithNestedCommand(this,stream);
    if (bVar2) {
      local_4 = stream;
      bVar2 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

