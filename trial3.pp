import openai

# Replace 'YOUR_API_KEY' with your actual API key
api_key = 'YOUR_API_KEY'

openai.api_key = api_key

def chat_with_gpt3(prompt):
    response = openai.Completion.create(
        engine="davinci",
        prompt=prompt,
        max_tokens=150,  # Adjust as needed
        temperature=0.7,  # Adjust to control response randomness
    )
    return response.choices[0].text

print("You are chatting with a GPT-3 chatbot. Type 'quit' to exit.")
while True:
    user_input = input("You: ")
    if user_input.lower() == 'quit':
        break
    prompt = f"You: {user_input}\nAI:"
    response = chat_with_gpt3(prompt)
    print("AI:", response)
