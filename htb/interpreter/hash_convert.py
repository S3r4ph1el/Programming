from base64 import b64decode, b64encode
raw = b64decode("u/+LBBOUnadiyFBsMOoIDPLbUR0rk59kEkPU17itdrVWA/kLMt3w+w==")
salt = b64encode(raw[:8]).decode().replace('+','.').replace('=','')
h = b64encode(raw[8:]).decode().replace('+','.').replace('=','')
print(f"sedric:$pbkdf2-sha256$600000${salt}${h}")
