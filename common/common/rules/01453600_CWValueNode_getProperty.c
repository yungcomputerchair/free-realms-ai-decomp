// addr: 0x01453600
// name: CWValueNode_getProperty
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWValueNode_getProperty(void * this, void * env) */

bool __thiscall CWValueNode_getProperty(void *this,void *env)

{
  undefined4 unaff_EDI;
  
                    /* Logs "CWValueNode:: getProperty", resolves the node property, logs the
                       resulting Value, and returns success. */
  EvaluationEnvironment_tracef(env,"CWValueNode:: getProperty",unaff_EDI);
  (**(code **)(*(int *)this + 0x54))(env);
  GetPropertyNode_evaluate(this,env);
  EvaluationEnvironment_tracefWithPrefix(env,"Value: ");
  return true;
}

