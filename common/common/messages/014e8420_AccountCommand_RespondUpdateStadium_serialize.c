// addr: 0x014e8420
// name: AccountCommand_RespondUpdateStadium_serialize
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RespondUpdateStadium_serialize(void * thisObj, void *
   serializer) */

void __thiscall
AccountCommand_RespondUpdateStadium_serialize(void *this,void *thisObj,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes/dumps AccountCommand_RespondUpdateStadium by wrapping a serializer
                       object, serializing the AccountCommand base, then appending its string member
                       at offset +8. Evidence is the neighboring Respond Update Stadium command
                       block and the AccountCommand_serialize plus Serializer_appendString calls. */
  serializer_00 = thisObj;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,thisObj,(int)serializer_00);
  Serializer_appendString(thisObj,(void *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(thisObj);
  return;
}

