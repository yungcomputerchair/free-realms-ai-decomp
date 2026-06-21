// addr: 0x01430f90
// name: GameCommand_AcceptAdjournment_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_AcceptAdjournment_dump(void * this, void * serializer) */

void __thiscall GameCommand_AcceptAdjournment_dump(void *this,void *serializer)

{
                    /* Dumps GameCommand_AcceptAdjournment after base GameCommand data and writes
                       the mAccept boolean. Evidence is exact class/field strings "Starting
                       GameCommand_AcceptAdjournment" and "mAccept:". */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting GameCommand_AcceptAdjournment\n");
  GameCommand_serialize(this,serializer);
  DebugStream_writeCString(serializer,"mAccept: ");
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(serializer,"Ending GameCommand_AcceptAdjournment\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

