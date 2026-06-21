// addr: 0x014d6c40
// name: GatewayCommand_cloneInto
// subsystem: common/networking/gateway_command
// source (binary assert): common/networking/gateway_command/GatewayCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_cloneInto(void * target) */

void GatewayCommand_cloneInto(void *target)

{
  void *this;
  
                    /* RTTI-checks the supplied target as GatewayCommand and delegates to
                       NetworkCommand cloneInto; the base gateway command has no additional fields
                       copied here. */
  this = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                              &GatewayCommand::RTTI_Type_Descriptor,0);
  if (this == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\gateway_command\\GatewayCommand.cpp",0x1f);
  }
  NetworkCommand_cloneBaseFields(this);
  return;
}

