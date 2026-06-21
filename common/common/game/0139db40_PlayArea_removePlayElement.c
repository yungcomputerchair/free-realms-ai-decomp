// addr: 0x0139db40
// name: PlayArea_removePlayElement
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayArea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayArea_removePlayElement(void * this, void * element) */

void __thiscall PlayArea_removePlayElement(void *this,void *element)

{
  void *stream;
  char cVar1;
  bool bVar2;
  
                    /* Looks up an element in the play area, asserts success and valid PlayElement
                       identity, then invokes the play-area removal virtual. */
  stream = element;
  cVar1 = (**(code **)(*(int *)this + 0x10))(element,&element);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x2e0);
  }
  bVar2 = PlayElement_deserialize(this,stream);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\game\\PlayArea.cpp",0x2e3);
  }
  (**(code **)(*(int *)this + 0x14))(stream);
  return;
}

