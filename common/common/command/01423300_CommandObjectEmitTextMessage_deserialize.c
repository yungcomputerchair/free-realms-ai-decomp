// addr: 0x01423300
// name: CommandObjectEmitTextMessage_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectEmitTextMessage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectEmitTextMessage_deserialize(void * this, void * stream) */

void __thiscall CommandObjectEmitTextMessage_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  bool bVar2;
  void *pvVar3;
  int *piVar4;
  void *pvVar5;
  int local_4;
  
                    /* Deserializes CommandObjectEmitTextMessage: reads the base command,
                       text/message fields, an integer field, and a string/structured text payload
                       before closing the object read. */
  piVar4 = &local_4;
  pvVar3 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,piVar4);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitTextMessage.cpp",0x222);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitTextMessage.cpp",0x225);
  }
  bVar2 = Deserializer_readString(stream,(void *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitTextMessage.cpp",0x228);
  }
  bVar2 = Deserializer_readInteger(stream,&local_4);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitTextMessage.cpp",0x22b);
  }
  *(int *)((int)this + 0x138) = local_4;
  pvVar5 = stream;
  cVar1 = EvaluationEnvironment_readStringPairs((int)this + 0x13c);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitTextMessage.cpp",0x232,
                 pvVar3,piVar4,pvVar5);
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

