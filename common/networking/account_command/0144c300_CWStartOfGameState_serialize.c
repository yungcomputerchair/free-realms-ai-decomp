// addr: 0x0144c300
// name: CWStartOfGameState_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWStartOfGameState_serialize(int * this, int serializer) */

void __thiscall CWStartOfGameState_serialize(void *this,int serializer)

{
  int map;
  
                    /* Serializes CWStartOfGameState by emitting base state fields, State, and
                       DecksSelected. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting CWStartOfGameState\n");
  StateMachineState_dump(this,(void *)serializer);
  DebugStream_writeCString((void *)serializer,"State: ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 0xf4));
  DebugStream_writeCString((void *)serializer,"DecksSelected: ");
  STLMap_intToBool_serialize_01356ef0(&stack0x00000000,(void *)((int)this + 0xf8),map);
  DebugStream_writeCString((void *)serializer,"Ending CWStartOfGameState\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

