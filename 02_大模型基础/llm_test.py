import os
from dotenv import load_dotenv
from openai import OpenAI

load_dotenv()                       # 读取 .env 里的 Key
client = OpenAI(
    api_key=os.getenv("DEEPSEEK_API_KEY"),
    base_url="https://api.deepseek.com",   # ★ 这是关键：换成 DeepSeek 的地址
)
resp = client.chat.completions.create(
    model="deepseek-flash",
    messages=[
        {"role": "system", "content": "你是一名耐心的大一助教"},
        {"role": "user", "content": "用三句话解释什么是边缘检测"},
    ],
)
print(resp.choices[0].message.content)