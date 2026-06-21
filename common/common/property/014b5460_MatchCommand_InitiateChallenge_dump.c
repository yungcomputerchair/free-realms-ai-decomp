// addr: 0x014b5460
// name: MatchCommand_InitiateChallenge_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_InitiateChallenge_dump(void * this, void * serializer) */

void __thiscall MatchCommand_InitiateChallenge_dump(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Dumps/serializes the InitiateChallenge match command by emitting base
                       MatchCommand data and three integer payload fields from this+0xc, +0x10, and
                       +0x14. */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  MatchCommand_dump(this,serializer,pvVar1);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

