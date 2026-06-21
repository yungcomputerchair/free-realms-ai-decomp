// addr: 0x014a6ce0
// name: TradeCommand_SetListenStatus_cloneInto
// subsystem: common/networking/trade_command
// source (binary assert): common/networking/trade_command/TradeCommandSetListenStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetListenStatus_cloneInto(void * this, void * target) */

void __thiscall TradeCommand_SetListenStatus_cloneInto(void *this,void *target)

{
  void *dest;
  
                    /* Copies a TradeCommand_SetListenStatus into an RTTI-checked target by invoking
                       TradeCommand cloneInto and copying the listen-status byte at +0xc. */
  dest = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                              &TradeCommand_SetListenStatus::RTTI_Type_Descriptor,0);
  if (dest == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\trade_command\\TradeCommandSetListenStatus.cpp",
                 0x2a);
  }
  TradeCommand_cloneBaseFields(this,dest);
  *(undefined1 *)((int)dest + 0xc) = *(undefined1 *)((int)this + 0xc);
  return;
}

