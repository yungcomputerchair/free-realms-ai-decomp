// addr: 0x014e0710
// name: GameCommand_CanPrevent_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CanPrevent_serialize(int * this, int serializer) */

void __thiscall GameCommand_CanPrevent_serialize(void *this,int serializer)

{
                    /* Serializes GameCommand_CanPrevent with GameCommand base data and an integer
                       list at this+9. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString((void *)serializer,"Starting GameCommand_CanPrevent\n");
  GameCommand_serialize(this,(void *)serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x24);
  DebugStream_writeCString((void *)serializer,"Ending GameCommand_CanPrevent\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

